class Pokemon {
  #vida;

  constructor(apelido, tipo, vidaInicial) {
    this.apelido = apelido;
    this.tipo = tipo;
    this.#vida = vidaInicial;
  }

  get vida() {
    return this.#vida;
  }

  sofrerDano(pontos) {
    this.#vida = Math.max(0, this.#vida - pontos);
    console.log(`${this.apelido}: ${this.#vida}`);
  }

  atacar(alvo) {
    console.log(`${this.apelido} ataca ${alvo.apelido}`);
    alvo.sofrerDano(10);
  }
}

class Squirtle extends Pokemon {
  constructor(apelido, vidaInicial) {
    super(apelido, 'Agua', vidaInicial);
  }

  atacar(alvo) {
    console.log(`${this.apelido} ataca ${alvo.apelido}`);
    alvo.sofrerDano(20);
  }
}

class Bulbasaur extends Pokemon {
  constructor(apelido, vidaInicial) {
    super(apelido, 'Planta', vidaInicial);
  }

  atacar(alvo) {
    console.log(`${this.apelido} ataca ${alvo.apelido}`);
    alvo.sofrerDano(15);
  }
}

const itemA = new Squirtle("A", 50);
const itemB = new Bulbasaur("B", 30);

itemB.atacar(itemA);

itemA.atacar(itemB);
itemA.atacar(itemB);

console.log(`${itemA.apelido}: ${itemA.vida}`);
console.log(`${itemB.apelido}: ${itemB.vida}`);

// console.log(itemA.#vida);
