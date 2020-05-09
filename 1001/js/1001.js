let path = '/dev/stdin';
//let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');

//console.log(lines);

//https://developer.mozilla.org/pt-BR/docs/Web/JavaScript/Reference/Global_Objects/Array/shift
let a = parseInt(lines.shift());
let b = parseInt(lines.shift());

console.log(`X = ${a + b}`);