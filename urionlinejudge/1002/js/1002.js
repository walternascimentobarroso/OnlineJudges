let path = '/dev/stdin';
// let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');

let A, R, P = 3.14159;
R = lines.shift();
A = parseFloat(P * (R * R)).toFixed(4);

console.log(`A=${A}`);