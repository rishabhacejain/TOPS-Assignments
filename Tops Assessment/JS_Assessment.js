function myFunction(arr){
    let obj = {};

    arr.forEach(num => {
        obj[num] = (obj[num] || 0) + 1;

    });
    return obj;


}

//const numbers = [1, 2, 3, 4, 2, 3, 5,2,2];
//console.log(myFunction(numbers));
console.log(myFunction([1,2,2,3]));
console.log(myFunction([9,9,9,99]));
console.log(myFunction([4,3,2,1]));
