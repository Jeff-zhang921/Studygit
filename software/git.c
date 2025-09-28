//system
//git config --global -e (see gitconfig)
//end of line:\r and \n
//first do: git init

//file1 file 2-> staging area(review our work)-> repository
//like take snapshot
//we have two file
//git add file1 file2: to staging area
//git commit -m "initial commit": go to repository
//staging area still has snapshot not empty after do the commit
//after change file
//git add file1
//git commit -m "fix the bug of file1"
//to delete file2
//delete file2 in working area 
//to delete in staging area : git add file2
//git commit -m "remove file2":to repository
//echo: writing content to a file
//echo hello> file1.txt
//to let git track
//use git status check whether in staging area
//git add *.txt
//git add.  :add entire directly recursively
//run git status it will appear go to staging area
//echo wrold>>file1.txt :>>means append
//git add file1.txt again

//git commit -m "initial commit."
//git commit 
//in the top of the editor, type commits, use blank line to seperate the commits

//remove
//rm file2.txt
//git status
//git ls-file:this is the file in staging area
//git add file2.txt
//git commit -m"remove"
//use git rm file2.txt:git remove both the staging area and repository

//rename
//mv file1.txt main.js
//git add file1.txt
//git add main.js
//git status
//or use git mv main.js file1.js:this change in wroking directory and staging

//if you want to ignore some file like *class
//mkdir logs, logs is your local repository
//echo hello>logs/dev.log
//git status
//.gitignore
//echo logs/ > .gitignore
//code .gitignore: it will appear logs/ indicate a directory
// u can type the file u want to ignore under logs/  
//back to the terminal
//git add .gitignore
//git commit -m "add gitignore"

//if we want to remove from only in staging area not in workflow(careless add)
//ask git rm -h for help,index is the old version of staging area
//after added(to staging), gitignore won't help
//mkdir bin
//echo hello>bin/app.bin
//code .gitignore(and add)
//git ls-files: see the file in staging area
//it still appear every time change the file
//git rm --cached -r bin/  (don't know ask git -h)(index is the old version of staging area)
//git commit -m "delete in stage"


//git status -s: see the ? or M (modify)or A (added)in two colomn 
//left colomn:staging area
//right colomn:working directory
//??:untracked file
// M:modified

//git log -graph
//master is the main branch in git
//head is a reference to the current branch
//git log --oneline:short summary of the commit
//git checkout (stuff u want to check out at that point 14cdkd)
//git show HEAD~1:show the line which count from the latest back (i.e. 1 step previous step)
//git show only show the differences
//git checkout master

//2 type repository: local and remote
//git remote add origin(name u can create) https...(copy from github)
//git push -u origin(instead put url) main
//create branch: git branch branch-name
//git checkout ...:switch the branch ...
//git checkout -b feature_branch(create the branch and immediately move to it)
//branch will created based on the current head is on(inherit)
//git branch newbranch:git create a branch base on main
//git branch newbranch oldbranch: branch will be created based on oldbranch
//git push --set upstream origin newbranch
//u can use git push in the future when applying to branch
//update the remote to locol: git pull
//pull request is to merge the branch
//reslove merge conflict
//merge conflict is the two branch make change to a same file base on the main

//git rebase:


//to remove some commit(for example after the third)
//to delete commit but keep the changes:git reset
//soft reset put the commit after the particular one to staging area: git reset --soft sd343
//mixed reset move the commit after the particular one to the working directory(unstage it):git reset sd3434
//hard reset  delete all commit after the particular one :git reset --hard jfj3

//to maintain the commit but to change the stuff inside the project
// git revert commithash to back to thr previous step
//you can change the code inside
//git add .
//git revert --continue
 
 //git stash fix someother thing while doing the coding(that this code don't want to lose but not yet want to commit)

 //git stash
 //implement urgent code
 //git add .
 //git commit -m"save"
 //git stash apply stashname
 //to see stashname:git stash list(name like:stash@{0})




















