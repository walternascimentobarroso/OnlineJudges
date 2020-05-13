// https://www.youtube.com/watch?v=uCsD3ZGzMgE
//let path = '/dev/stdin';

let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');

lines.forEach(main);

function main(line, index) {
    if (index === 0) return;
    let n = line.split(' ').map(Number);
    console.log(`Case ${index}: ${josephus(n[0], n[1] - 1)}`);
}

function josephus(totalPeople, range) {
    let array = Array.from(Array(totalPeople), (x, i) => i++);
    let i = 0;
    while (array.length > 1) {
        i = (i + range) % array.length;
        array.splice(i, 1);
    }
    return array[0] + 1;
}