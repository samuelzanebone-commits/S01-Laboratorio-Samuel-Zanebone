class Pistola {
  constructor(modelo) {
    this.modelo = modelo;
  }
}

class AgenteProtocolo {
  #pistola;

  constructor(codinome, modeloDaPistola) {
    this.codinome = codinome;
    this.#pistola = new Pistola(modeloDaPistola);
  }

  usarHabilidade() {
    throw new Error("Metodo nao implementado");
  }

  entrarEmCombate() {
    console.log(`${this.codinome} - ${this.#pistola.modelo} - ${this.usarHabilidade()}`);
  }
}

class Controlador extends AgenteProtocolo {
  usarHabilidade() {
    return "Acao A";
  }
}

class Iniciador extends AgenteProtocolo {
  usarHabilidade() {
    return "Acao B";
  }
}

class Duelista extends AgenteProtocolo {
  usarHabilidade() {
    return "Acao C";
  }
}

class Esquadrao {
  #agentes;

  constructor(nome, agentes = []) {
    this.nome = nome;
    this.#agentes = agentes;
  }

  iniciarPartida() {
    console.log(`Esquadrao: ${this.nome}`);
    this.#agentes.forEach(agente => {
      agente.entrarEmCombate();
    });
  }

  listarControladores() {
    return this.#agentes.filter(agente => agente instanceof Controlador);
  }
}

const itemA = new Controlador("Agente 1", "Pistola A");
const itemB = new Controlador("Agente 2", "Pistola B");
const itemC = new Iniciador("Agente 3", "Pistola C");
const itemD = new Duelista("Agente 4", "Pistola D");

const grupo = new Esquadrao("Esquadrao 1", [itemA, itemB, itemC, itemD]);

grupo.iniciarPartida();

const controladores = grupo.listarControladores();
controladores.forEach(c => {
  console.log(c.codinome);
});

const agenteBase = new AgenteProtocolo("Agente Base", "Pistola Padrao");



// agenteBase.entrarEmCombate();
