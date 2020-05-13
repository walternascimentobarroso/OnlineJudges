// let path = '/dev/stdin';
let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');

lines.forEach(main);

function main(line, index) {
    if (index === 0) return;
    let n = line.split(' ').map(Number);
    console.log(`Case ${index}: ${josephus(n[0], n[1])}`);

}

function josephus(a, b) {
    return (a == 1) ? 1 : (((josephus(a - 1, b) + b - 1) % a) + 1);
}