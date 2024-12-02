const number = Number(require("fs").readFileSync("stdin", "utf8"));
for(let i = 1; i <= 10; i++) {
    console.log(`${i} X ${number} = ${number * i}`);
}