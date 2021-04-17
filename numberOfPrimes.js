#!/usr/bin/env node

const countPrimeNumbers = value => {
  let nums = 0;

  for (let i = 2; i <= value; i++) {
    let prime = true;

    for (let j = 2; j < i; j++) {
      if (i % j === 0) {
        prime = false;
      }
    }

    if (prime) {
      nums++;
    }
  }

  return nums;
};

(function () {
  const numbers = [100, 50, 20];
  numbers.forEach(number => console.log(countPrimeNumbers(number)));
})();
