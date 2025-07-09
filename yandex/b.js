const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false,
});

function solve(input) {
  const r = input.length;
  const c = input[0].split(" ").length;
  console.log(`${r} ${c}`);
}

const input = [];
rl.on("line", (l) => {
  if (l.trim() === "") {
    rl.close();
    return;
  }
  input.push(l);
});

rl.on("close", () => {
  if (input.length > 0) {
    solve(input);
  }
});
