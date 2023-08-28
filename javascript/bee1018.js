let valor = parseInt(require("fs").readFileSync("stdin", "utf8"));

console.log(valor);
notas = [100, 50, 20, 10, 5, 2, 1];

notas.forEach((nota) => {
    let qntNotas = parseInt(valor / nota);
    console.log(`${qntNotas} nota(s) de R$ ${nota},00`);
    valor -= qntNotas * nota;
});