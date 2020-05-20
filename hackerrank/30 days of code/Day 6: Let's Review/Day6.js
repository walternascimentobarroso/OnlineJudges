function processData(input) {
    //Enter your code here
    message = input.split("\n");

    let n = parseInt(message[0]);

    for (let x = 1; x < n + 1; x++) {
        let m = message[x], arr = m.split(''), part1 = "", part2 = "";

        for (let y = 0; y < m.length; y++) {
            (y % 2 == 0) ? part1 += arr[y] : part2 += arr[y];
        }
        console.log(`${part1} ${part2}`);

    }
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
    processData(_input);
});
