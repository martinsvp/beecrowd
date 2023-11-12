var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

const pesos = [2, 3, 4, 1];
const notas = lines[0].split(" ").map(Number);

let avg = notas.reduce((sum, nota, index) => sum + nota * pesos[index], 0) / pesos.reduce((total, peso) => total + peso, 0);
console.log("Media: " + avg.toFixed(1));

let sit = avg < 5.0 ? "Aluno reprovado." : avg <= 6.9 ? "Aluno em exame." : "Aluno aprovado.";
console.log(sit);

if(lines[1] !== undefined && lines[1] === "") {
    const notaFinal = Number(lines[1]);
	console.log("Nota do exame: " + notaFinal.toFixed(1));

	avg = (avg + notaFinal) / 2;
	sit = avg < 5.0 ? "Aluno reprovado." : "Aluno aprovado.";
	console.log(sit);
	console.log("Media final:", avg.toFixed(1));
}