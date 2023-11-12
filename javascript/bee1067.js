const x = Number(require("fs").readFileSync("stdin", "utf8"));

for(let i=1; i<=x; i+=2) {
    console.log(i);
}