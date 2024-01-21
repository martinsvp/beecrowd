const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");
let n = 0;
while(n < inputs.length) {
    if(inputs[n] === "") break;
    const resp = Number(inputs[n]) === 0 ? "vai ter copa!" : "vai ter duas!";
    console.log(resp);
    n++;
}
