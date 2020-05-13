//let path = '/dev/stdin';
let path = 'debug.txt';
let input = require('fs').readFileSync(path, 'utf8');
let lines = input.split('\n');

lines.forEach(main);

function main(qtd_regioes) {
    let m, n, atual, c13;
    for (m = 1; ; m++) {
        n = qtd_regioes;
        atual = 0;
        c13 = 12;
        while (atual != c13) {
            if (atual < c13) {
                c13--;
            }
            n--;
            atual = (atual - 1 + m) % n;
        }
        if (n === 1) {
            console.log(m);
            break;
        }
        if (qtd_regioes == 0)
            break;

    }
}