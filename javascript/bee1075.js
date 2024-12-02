const input = Number(require("fs").readFileSync("stdin", "utf8"));

for(let i = 0; i < 10000; i++) {
    if (i % input == 2) {
        console.log(i);
    }
}