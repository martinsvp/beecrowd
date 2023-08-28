let segundos = parseInt(require("fs").readFileSync("stdin", "utf8"));

const horas = segundos / 3600;
segundos %= 3600;
const minutos = segundos / 60;
segundos %= 60;

console.log(`${Math.floor(horas)}:${Math.floor(minutos)}:${Math.floor(segundos)}`);