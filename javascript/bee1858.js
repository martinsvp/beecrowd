const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");
const values = inputs[1].split(" ").map(Number);

const executioner = () => values.indexOf(Math.min(...values));
console.log(executioner() + 1)