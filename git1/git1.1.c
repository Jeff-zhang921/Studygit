#include <stdio.h>
int main (void){
    printf("hi, this is git1.1 in git1\n");
    printf("newline new\n");
 int m=5;
 int a=3;
printf("%i\n", sum(m,a));

}

int sum(int a, int b)
{
return a+b;
}

//setup
//press wsl.exe enter the ubuntu for intellji press exit or logout to exit the enviornment
//git clone url : copy remote repository to your local: local stuff you wrote before disappear if have
//git remote add origin  url : link only the remote repo to local repo
//git clone = "download & link."
//git remote add origin = "link only."
//git status : check the untrack file from working dir

//git push -u origin main: push the origin to main and link them
//git push -u origin feature_branch:
//Pushes your local branch feature_branch to the remote repository origin.
//git push --set-upstream origin main
//Sets an upstream (tracking) relationship between your local branch and the remote branch.



//branching
//different version of the code going in same repository
//git branch: see whole branch
//git push --set-upstream origin my-feature: when post new branch in to the remote first
//after that on the feature branch use git push to push the feature branch to remote feature branch

//to pull the remote branch first time use git switch -c feature origin/feature
//later can use git fetch to fetch all the remote exist branch at your repository
//git pull only pull main branch, git fetch -all fetch all branch

//git checkout commit_hash:go back to this version
//switch between branch use git checkout <>

//when create a new feature branch, the old main code will copy to the feature branch as it start
//git checkout -b new_branch: create the new branch and switch the head to new branch
//Creates the remote branch feature_branch (if it doesn’t already exist).



//remote  workspace: pull(fetch+merge only this branch)


//merge and rebase
//merge two branch by first switch to main then, git merge <function branch>
//git merge combine the branch from the test branch to the master branch
//they are all merging feature branch to main branch
//if the time of adding a commit in feature branch is earlier that commit add in main branch,
//in rebase:all commit in feature branch when rebase will base to the latest commit
//in merge: main commit will come later that feature branch commit
//in merge, it totally depends on which branch create the new commit first to put that commit first

//git rebase --continue    # continue after fixing conflict
//git rebase --abort       # cancel a rebase


//adding a new file: untracked changing an file: unstaged

//origin: local point to the github repository(name)
//main: main branch
//token: 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

//对于merge conflict
//发生情况:when two person change the same line in the repository
//if person a add line or changing line, while b is changing another line and commit, when a commit, there will be no merge conflict
//if changing is at different area it won't conflict
//after solving the conflict, add to staging area and add a new commit can be solve merge conflict




//undo and recovery
//git reset remove the trace in commit in history (from particular point) without deleting the code
//git reset --soft somecommit: will delete the commit and commit after that and put code that update with those commit to staging area
//git reset somecommit: will delete the commit and the commit after that thus all changes(code) made after that commitn will go to the working directory
//git reset --hard somecommit: will delete all the commit after that commit and the code alongside will delete too

//git revert commit: retain the commit but the code with that commit will disappear
//after revert, it will ask a new commit to state revert commit x or can just skip it by press    :qa!

//git revert might show conflict if:
//commit A add the code, commit b change that code
//commit c revert commit A, then it don't know which to delete
//after solving the conflict, git add . to stage it and git revert --continue
//get stuck, cancel whole thing :git revert --abort

//git stash: when you want to fix an urgent bug but you are not ready to commit in your new progress
//git stash help you tempoaray save the new one
//git stash: just run it will save the new code(hasn't commit) while only display the last commit code
//git stash list\ :after fixed it and commit it, get the stash name that just saved by press this
//git stash apply stash@{number represent this stash}
