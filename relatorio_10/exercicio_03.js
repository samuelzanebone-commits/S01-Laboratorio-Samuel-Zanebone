class FichaDeCriatura {
  constructor(criatura, nivelDePerigo) {
    this.criatura = criatura;
    this.nivelDePerigo = nivelDePerigo;
  }

  descrever() {
    return `${this.criatura} - Nivel: ${this.nivelDePerigo}`;
  }
}

class DiarioMisterioso {
  #fichas;

  constructor(numero) {
    this.numero = numero;
    this.#fichas = [];
  }

  anotar(criatura, nivelDePerigo) {
    const ficha = new FichaDeCriatura(criatura, nivelDePerigo);
    this.#fichas.push(ficha);
  }

  exibirFichas() {
    console.log(`Diario: ${this.numero}`);
    this.#fichas.forEach(ficha => {
      console.log(ficha.descrever());
    });
  }
}

class Funcionario {
  constructor(nome, cargo) {
    this.nome = nome;
    this.cargo = cargo;
  }
}

class CabanaDoMisterio {
  #funcionarios;

  constructor(dono) {
    this.dono = dono;
    this.#funcionarios = [];
  }

  contratar(funcionario) {
    this.#funcionarios.push(funcionario);
  }

  abrirAsPortas() {
    console.log(`Dono: ${this.dono}`);
    this.#funcionarios.forEach(funcionario => {
      console.log(`${funcionario.nome} - ${funcionario.cargo}`);
    });
  }
}

// Composicao: as instancias de FichaDeCriatura sao criadas diretamente dentro do metodo anotar de DiarioMisterioso, nao existindo de forma independente fora.
// Agregacao: as instancias de Funcionario sao criadas externamente e passadas por referencia para o metodo contratar de CabanaDoMisterio, existindo de forma independente.

const diario1 = new DiarioMisterioso(1);
diario1.anotar("Entidade A", 3);
diario1.anotar("Entidade B", 5);
diario1.anotar("Entidade C", 2);

diario1.exibirFichas();

const funcionario1 = new Funcionario("Pessoa A", "Funcao 1");
const funcionario2 = new Funcionario("Pessoa B", "Funcao 2");

const cabana1 = new CabanaDoMisterio("Responsavel 1");
cabana1.contratar(funcionario1);
cabana1.contratar(funcionario2);

cabana1.abrirAsPortas();
