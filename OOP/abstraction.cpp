class BetterArray {
  #item
  constructor() {
    this.#item = [];
  }
  getItem() {
    return [...this.#item];
  }
  addItem(item) {
    this.#item.push(item);
  }
  removeItem(ItemToDelete) {
    this.#item = this.#item.filter((item) => item !== ItemToDelete);
  }
  modifyItem(itemToChange, newValue) {
    const index = this.#item.indexOf(itemToChange);
    if(index !== -1) {
      this.#item[index] = newValue;
    }
  }
}

const array = new BetterArray;
array.addItem("noman");
console.log(array.getItem());
array.modifyItem("noman", "nasrullah");
console.log(array.getItem());
array.removeItem("nasrullah");
console.log(array.getItem());
