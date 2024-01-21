const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");
const numbers = inputs.slice(2).map(Number);
const col = Number(inputs[0]);
const op = inputs[1].trim();

const [maxRows, maxCols] = [12, 12];
const matrix = [];

function generateMatrix(rows, cols) {
    for (let i = 0; i < rows; i++) {
        matrix[i] = [];
        for (let j = 0; j < cols; j++) {
            matrix[i][j] = numbers[i * cols + j];
        }
    }
}

function sumColMatrix(col) {
    return matrix.reduce((sum, row) => sum + row[col], 0);
}

function avgColMatrix(col) {
    return sumColMatrix(col) / maxRows;
}

generateMatrix(maxRows, maxCols);
if (op === 'S') console.log(sumColMatrix(col).toFixed(1));
if (op === 'M') console.log(avgColMatrix(col).toFixed(1));