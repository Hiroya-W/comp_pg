# Comp_pg

## Setup

```bash
poetry install
npm install
```

## initial setup for atcoder-cli

```fish
cp -r template/cpp (npx acc config-dir)
npx acc config default-template cpp
npx acc config default-test-dirname-format test
npx acc config default-task-choice all
```

## how to use

Pythonの仮想環境を有効にする。

```
poetry shell
```

AtCoderへログインする。

```
npx acc login
oj login https://atcoder.jp/
```

問題を取得する。

```
acc new CONTENST_NAME
```

VSCodeから、`Tasks: Run Build Task`を利用してビルドする。

テストケースに対してテストを行う。

```
oj t
```

提出する。

```
npx acc s
```

## 参考

http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/
