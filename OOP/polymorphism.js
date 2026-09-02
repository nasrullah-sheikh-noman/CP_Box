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
  getInfo() {
    return (`${this.#name} is ${this.#age} years old.`);
  }
}

class Cricketer extends Player {
  #runs;
  constructor(name, age, runs) {
    super(name, age);
    this.#runs = runs;
  }
  getInfo() {
    return (`${this.getName()} এর বয়স ${this.getAge()} বছর।`);
  }
}

class Footballer extends Player {
  #goals;
  constructor(name, age, goals) {
    super(name, age);
    this.#goals = goals;
  }
}

const messi = new Footballer("messi", 45, 300);

console.log(messi.getInfo());

const mashrafi = new Cricketer("mashrafi", 35, 1200);

console.log(mashrafi.getInfo());

