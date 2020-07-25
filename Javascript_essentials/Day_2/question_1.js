let sales = parseInt(prompt("Enter the sale amount:"));
let total_commision = 0;

if (0 <= sales && sales <= 5000) {
    total_commision = 0.02 * sales;
} else if (5001 <= sales && sales <= 10000) {
    total_commision = 0.05 * sales;
} else if (10001 <= sales && sales <= 20000) {
    total_commision = 0.07 * sales;
} else if (20001 <= sales) {
    total_commision = 0.1 * sales;
}
console.log(total_commision);