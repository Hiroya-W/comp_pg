# Comp_pg

## Setup

```bash
poetry install
npm install
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
