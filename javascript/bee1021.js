let valor = parseFloat(require("fs").readFileSync("stdin", "utf8"));

notas = [100, 50, 20, 10, 5, 2];
moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01];

console.log("NOTAS:");
notas.forEach((nota) => {
    let qntNotas = parseInt(valor.toFixed(2) / nota);
    console.log(`${qntNotas} nota(s) de R$ ${nota.toFixed(2)}`);
    valor -= qntNotas * nota;
});

console.log("MOEDAS:");
moedas.forEach((moeda) => {
    let qntMoedas = parseInt(valor.toFixed(2) / moeda);
    console.log(`${qntMoedas} moeda(s) de R$ ${moeda.toFixed(2)}`);
    valor -= qntMoedas * moeda;
});