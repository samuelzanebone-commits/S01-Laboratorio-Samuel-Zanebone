class UsuarioDeNen {
  constructor(nome) {
    this.nome = nome;
  }

  atacar(alvo) {
    console.log(`${this.nome} desfere ataque contra ${alvo.nome}`);
  }
}

class Intensificador extends UsuarioDeNen {
  atacar(alvo) {
    console.log(`${this.nome} desfere ataque do tipo 1 contra ${alvo.nome}`);
  }
}

class Transmutador extends UsuarioDeNen {
  atacar(alvo) {
    console.log(`${this.nome} desfere ataque do tipo 2 contra ${alvo.nome}`);
  }
}

class Materializador extends UsuarioDeNen {
  atacar(alvo) {
    console.log(`${this.nome} desfere ataque do tipo 3 contra ${alvo.nome}`);
  }
}

class Aranha {
  constructor(nome, numero) {
    this.nome = nome;
    this.numero = numero;
  }
}

class TrupeFantasma {
  #aranhas;

  constructor(cidade, aranhas = []) {
    this.cidade = cidade;
    this.#aranhas = aranhas;
  }

  revelarAranhas() {
    console.log(`Local: ${this.cidade}`);
    this.#aranhas.forEach(aranha => {
      console.log(`${aranha.numero} - ${aranha.nome}`);
    });
  }

  buscarAranha(numero) {
    return this.#aranhas.find(aranha => aranha.numero === numero);
  }
}

const itemA = new Aranha("Alvo 1", 4);
const itemB = new Aranha("Alvo 2", 8);

const grupo = new TrupeFantasma("Regiao A", [itemA, itemB]);

grupo.revelarAranhas();

const alvoEncontrado = grupo.buscarAranha(4);

const atacante1 = new Intensificador("Combatente 1");
const atacante2 = new Transmutador("Combatente 2");
const atacante3 = new Materializador("Combatente 3");

const atacantes = [atacante1, atacante2, atacante3];

atacantes.forEach(atacante => {
  atacante.atacar(alvoEncontrado);
});
