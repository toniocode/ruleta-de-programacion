// Dado un array de números enteros, encuentra el primer
// número que aparece una sola vez.

function numeroSolitarioF1(arr) {
    return arr.filter(num => arr.indexOf(num) === arr.lastIndexOf(num))[0] || [];
}

function numeroSolitarioF2(arr) {
    const contador = arr.reduce((acc, num) => {
        acc[num] = (acc[num] || 0) + 1;
        return acc;
    }, {});
    return arr.find(num => contador[num] === 1) || [];
}

const arr1 = [4, 1, 2, 1, 2];
const arr2 = [5, 3, 5, 7, 7, 9, 1, 9];
const arr3 = [1, 1, 2, 2];

console.log("Forma1");
console.log(numeroSolitarioF1(arr1));
console.log(numeroSolitarioF1(arr2));
console.log(numeroSolitarioF1(arr3));

console.log("");

console.log("Forma2");
console.log(numeroSolitarioF2(arr1));
console.log(numeroSolitarioF2(arr2));
console.log(numeroSolitarioF2(arr3));