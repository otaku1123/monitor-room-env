# M5Stackで温湿度センサーを作る①

作業部屋の湿度を感じることが多いのですが、気づいたら気にならない時期になってます。。  
除湿機を買おうか悩んでいたのですが、実際どの程度湿度変化があるのか気になり、  
温湿度センサーを作ってみることにしました。

画面があると色々と便利なので、M5Stackを使ってみます。
BLE、Wi-Fi使えるので、幅広げるのも楽そう

## 環境構築

PlatformIOを業務で使っていたので、PlatformIOを使って環境構築します。

前提として、Visual Studio Codeの拡張機能にPlatformIOインストール済みです。
PlatformIOのインストールは[こちら](https://platformio.org/install/ide?install=vscode)を参考にしてください。

### PlatformIOのプロジェクト作成

以下設定でプロジェクトを作成しました。

- Name: env-sensor
- Board: M5Stack Core ESP32
- Framework: Arduino

プロジェクトを作成すると、以下のようなディレクトリ、ファイルが自動生成されます。

```plain
.
├── include
│   └── README
├── lib
│   └── README
├── platformio.ini
├── src
│   └── main.cpp
└── test
    └── README
```
