let fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().split("\n"); // 백준 제출용
// let input = fs.readFileSync("js_input.txt").toString().split(" "); // vscode 테스트용

let T = Number(input[0]);
let answer = "";
for (let i = 1; i <= T; i++) {
  let num = input[i].split(" ").map(Number);
  answer += num[0] + num[1] + "\n";
}

console.log(answer);
