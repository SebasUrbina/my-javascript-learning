# Lab Instructions: Unit Testing

## Task 1: Add Jest as a devDependency

Open terminal. Make sure that it's pointing to `jest-testing` directory.  
Install the jest npm package using the npm install command and the --save-dev flag.  
Verify that the installation was completed successfully by opening the package.json file and confirming that the "devDependencies" entry lists jest similar to the following:

```
"devDependencies": {
    "jest": "^28.0.0"
}
```

<br>

## Task 2: Update the test entry

In the package.json file, locate the "scripts" entry, and inside of it, update the test entry to `jest`.
<br><br>

## Task 3: Code the timesTwo function

Open the timesTwo.js file and add a function named `timesTwo`. The function should take number as input and return the value 2 multiplied by the number.
Export the timesTwo function as a module.
<br><br>

## Task 4: Write the first test

Code a test call with the following arguments:

1. The description that reads: "returns the number times 2".
2. The second argument should expect the call to the timesTwo function, when passed the number 10, to be 20.
   <br><br>

## Task 5: Run the first test

With the terminal pointed at the `jest-testing` directory, run the test script using npm.
