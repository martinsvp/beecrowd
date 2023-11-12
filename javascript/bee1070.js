let x = Number(require("fs").readFileSync("stdin", "utf8"));

let count = 0;
while(count < 6) {
    if(x % 2 !== 0) {
        console.log(x);
        count++;
    }
    x++;
}