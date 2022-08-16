# 学习Git版本控制

## Day01 

 1. 新建库

 2. 新建库下`readme.md`

    Git is a distributed version control system

    Git is free software distributed under the GPL.
    
    
    
    ```bash
    git add <file>
    ```
    
    ```bash
    git commit -m "description"
    ```
    
    ```bash
    git reset --hard 1094a
    ```
    
    ```bash
    git push origin master
    ```
    
    ```bash
    git pull                                  将远程仓库拉取至本地
    ```
    
    ```shell
    git clone git@github.com:shimakaze-cani/xxx.git
    ```

### 暂存区的操作说明

当改动工作区的内容后，丢弃工作区的修改，使用命令 `git checkout -- file`

当改动工作区的内容后，还提交到了暂存区，两步操作退回 第一步 `git reset HEAD <file>`即回到了第一种情形

如果已经提交到版本库时 应当版本回退 使用命令 `git reset --hard HEAD^`

修改文件 git add 修改文件 git commit 最终提交的是第一次修改的操作，如果需要将第二次修改的操作提交应当在第二次修改文件后 git add 再 git commit

### 删除文件



### 远程仓库

```bash
 git push origin master
```

### 分支控制

创建`dev`分支，然后切换至`dev`分支

```
$ git checkout -b dev
```

`-b`表示创建并切换

查看当前分支：

```
$ git branch
```

现在，把`dev`分支的工作成果合并到`master`分支上：

```
$ git merge dev
```

合并完成后，就可以放心地删除`dev`分支了：

```
$ git branch -d dev
```

删除后，查看`branch`，就只剩下`master`分支了：

```
$ git branch
```

Switch 创建并切换到新的`dev`分支，可以使用：

```
$ git switch -c dev
```

直接切换到已有的`master`分支，可以使用：

```
$ git switch master
```