let path = '/dev/stdin';
//let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');
lines.forEach(main);

function main(line) {
	let n = line.split(' ').map(BigInt);
	console.log(parseInt(n[0] ^ n[1]));
}
