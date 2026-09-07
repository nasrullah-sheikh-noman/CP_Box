class Player {
  #name;
  #age;
  constructor(name, age) {
    this.#name = name;
    this.#age = age;
  }
  getName() {
    return this.#name;
  }
  getAge() {
    return this.#age;
  }
}

class Cricketer extends Player {
  #runs;
  constructor(name, age, runs) {
    super(name, age);
    this.#runs = runs;
  }
  getInfo() {
    return (`${this.getName()} runs is ${this.#runs} & his age is ${this.getAge()}.`);
  }
}

class Footballer extends Player {
  #goals;
  constructor(name, age, goals) {
    super(name, age);
    this.#goals = goals;
  }
  getInfo() {
    return (`${this.getName()} golas is ${this.#goals} & his age is ${this.getAge()}.`);
  }
}

const messi = new Footballer("messi", 45, 300);

console.log(messi.getInfo());

const mashrafi = new Cricketer("mashrafi", 35, 1200);

console.log(mashrafi.getInfo());
