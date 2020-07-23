let marks = prompt("Enter your marks:");

if (marks > 90)
    console.log("Marks are ", marks, " and grade is A");

else if (marks <= 90 && marks > 75)
    console.log("Marks are ", marks, " and grade is B");

else if (marks <= 75 && marks > 50)
    console.log("Marks are ", marks, " and grade is C");

else if (marks <= 50 && marks > 30)
    console.log("Marks are ", marks, " and grade is D");

else
    console.log("Marks are ", marks, " and grade is F");