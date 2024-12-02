const input = require("fs").readFileSync("stdin", "utf8").split("\n");
const [n, ...tests] = input;
const result = {
    "C": 0,
    "R": 0,
    "S": 0,
};

tests.forEach((test) => {
    const [amount, type] = test.trim().split(" ");
    result[type] += parseInt(amount);
})

console.log(`Total: ${result["C"] + result["R"] + result["S"]} cobaias`);
console.log(`Total de coelhos: ${result["C"]}`);
console.log(`Total de ratos: ${result["R"]}`);
console.log(`Total de sapos: ${result["S"]}`);

console.log(`Percentual de coelhos: ${((result["C"] / (result["C"] + result["R"] + result["S"])) * 100).toFixed(2)} %`);
console.log(`Percentual de ratos: ${((result["R"] / (result["C"] + result["R"] + result["S"])) * 100).toFixed(2)} %`);
console.log(`Percentual de sapos: ${((result["S"] / (result["C"] + result["R"] + result["S"])) * 100).toFixed(2)} %`);
