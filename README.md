#  Lab exercise 3 objectives
1. Usage of variables, cin, cout, sizeof
2. Find bugs in programs
3. Compile and run programs

# Additional Reading
Chapter 2 of the course textbook.

# Lab exercise guide
Here's a link to the [Lab exercise guide](https://drive.google.com/open?id=1MCaTFhxM1wIeC-Iwr1FC4Fw1mVVVRXh7) in case you need to review the lab exercise objectives, grading scheme, or evaluation process.

# Code evaluation
To get a copy of this GitHub lab repository on your computer, you will need the repository URL from GitHub. This is found by clicking on the green *Clone or download* button at the top right part of this Webpage.

Copy the URL and in a terminal window, type the `git clone` command below, replacing the dummy text with your URL. When you hit <kbd>Enter</kbd> it will ask you to provide your GitHub username and password. Provide the information to start the cloning process. Once done, you will have a copy of the repository on your computer.

```
git clone place_URL_here
```

Within the terminal window, navigate to the folder that contains this exercise. Assuming you have pulled the code inside of `/home/student/labex01-tuffy` and you are currently in `/home/student` you can issue the following commands

```
cd labex01-tuffy
cd prob01
```

When you want to answer another problem, you need to go back up to the parent folder and navigate into the next problem. Assuming you are currently in `prob01`, you can issue the following commands to go to the parent folder then go into another problem you want to answer; `prob02` for example.

```
cd ..
cd prob02
```

Use the `clang++` command to compile your code and the `./` command to run it. The sample code below shows how you would compile code saved in `main.cpp` into the executable file `main`. Make sure you use the correct filenames required in this problem. Take note that if you make any changes to your code, you will need to compile it first before you see changes when running it.

```
clang++ -std=c++17 main.cpp -o main
./main
```

# Submission
1. To upload your code into the GitHub repository, the first step is to add your code to what is called the staging area using git's `add` command. The parameter after `add` is the name of the file(s) you want to add. There are cases when you have multiple changed files, so you can just type . (period) instead to add all modified files `git add .`.

    ```
    git add main.cpp
    ```

1. Once everything is in the staging area, we use the `commit` command to tell git that we have added everything we need into the staging area. This command can be issued with a message informing users of the changes made.

    ```
    git commit -m "short description of code changes being uploaded"
    ```

1. In case it asks you to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and GitHub username.

    ```
    git config --global user.email "tuffy@csu.fullerton.edu"
    git config --global user.name "Tuffy Titan"
    ```

    When you're done, make sure you type the `git commit` command again.

1. And finally, you can upload all changes to the GitHub repository using git's `push` command. Provide your GitHub username and password when you are prompted for these.

    ```
    git push
    ```

1. When you finish the exercise, go back to Titanium and click on the `Add submission` button in the lab exercise page. Provide a short message *that includes your GitHub username* in the text area such as "user tuffy - finished lab exercise" and click on `Save changes`. Finally, click on `Submit assignment` to inform your instructor that you are done.
