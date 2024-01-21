const size = parseInt(require('fs').readFileSync('stdin', 'utf8'));
const str = "life is not a problem to be solved";

const newStr = str.slice(0, size).toUpperCase();
console.log(newStr)