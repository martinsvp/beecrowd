var input = require("fs").readFileSync("stdin", "utf8");

const a = parseFloat(input.split(" ")[0]);
const b = parseFloat(input.split(" ")[1]);
const c = parseFloat(input.split(" ")[2]);

function areaTri(a, c) {
    return (a*c) / 2;
}

function areaCirc(c) {
    return Math.pow(c, 2) * 3.14159;
}

function areaTrap(a, b, c) {
    return ((a+b)*c) / 2;
}

function areaQuad(b) {
    return b*b;
}

function areaRet(a, b) {
    return a*b;
}

console.log(`TRIANGULO: ${areaTri(a, c).toFixed(3)}`);
console.log(`CIRCULO: ${areaCirc(c).toFixed(3)}`);
console.log(`TRAPEZIO: ${areaTrap(a, b, c).toFixed(3)}`);
console.log(`QUADRADO: ${areaQuad(b).toFixed(3)}`);
console.log(`RETANGULO: ${areaRet(a, b).toFixed(3)}`);