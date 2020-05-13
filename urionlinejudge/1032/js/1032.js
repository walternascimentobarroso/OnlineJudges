let path = 'debug.txt';
// let path = '/dev/stdin';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');
let primo = getPrimes(100000);
lines.forEach(main);

function getPrimes(max) {
	var sieve = [], i, j, primes = [];
	for (i = 2; i <= max; ++i) {
		if (!sieve[i]) {
			primes.push(i);
			for (j = i << 1; j <= max; j += i) {
				sieve[j] = true;
			}
		}
	}
	return primes;
}

function josephus(n, k) {
	return (n == 1) ? 1 : BigInt(BigInt(josephus(n - 1n, k + 1)) + BigInt(primo[k]) - 1n) % n + 1n;
}

function main(line) {
	let input = line.split(' ').map(BigInt);
	if (input[0] == 0) return;
	console.log(Number(josephus(input[0], 0)));
}

