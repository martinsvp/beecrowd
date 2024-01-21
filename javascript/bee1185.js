const inputs = require("fs").readFileSync("stdin", "utf8").split("\n");
const numbers = inputs.slice(1).map(Number);
const op = inputs[0].trim();

const [maxRows, maxCols] = [12, 12];
const matrix = [];
const selectedNumbers = [];

function generateMatrix(rows, cols) {
	for (let row = 0; row < rows; row++) {
		matrix[row] = [];
		for (let col = 0; col < cols; col++) {
			matrix[row][col] = numbers[row * cols + col];
		}
	}
}

function getSelectedNumbers() {
	for (let row = 0; row < maxRows; row++) {
		for (let col = 0; col < maxCols; col++) {
			if (col > maxCols - 1 - row) {
				selectedNumbers.push(matrix[row][col]);
			}
		}
	}
}

function sumNumbers() {
	return selectedNumbers.reduce((sum, number) => sum + number, 0);
}

function avgNumbers() {
	return sumNumbers() / selectedNumbers.length;
}

generateMatrix(maxRows, maxCols);
getSelectedNumbers();

if (op === "S") console.log(sumNumbers().toFixed(1));
if (op === "M") console.log(avgNumbers().toFixed(1));
