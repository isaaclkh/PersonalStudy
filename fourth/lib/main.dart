import 'package:flutter/material.dart';

void main() => runApp(const MyApp());

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'MyApp',
      theme: ThemeData(
        primaryColor: Colors.white,
      ),
      home: const MyHomePage(),
    );
  }
}

class MyHomePage extends StatelessWidget {
  const MyHomePage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Fourth'),
        centerTitle: true,
        backgroundColor: Colors.blue[100],
      ),
      backgroundColor: Colors.pink[100],
      body: const MySnackBar(),
    );
  }
}

class MySnackBar extends StatelessWidget {
  const MySnackBar({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Center(
      child: ElevatedButton(
          child: Text('Show me'),
          style: ElevatedButton.styleFrom(
            primary: Colors.lightGreen[200],
            onPrimary: Colors.white,
          ),
          onPressed: () {
            Scaffold.of(context).showSnackBar(
              SnackBar(
                content: Text(
                  'Hello',
                  textAlign: TextAlign.center,
                  style: TextStyle(
                    color: Colors.white,
                  ),
                ),
                backgroundColor: Colors.grey[350],
                duration: Duration(milliseconds: 500),
              ),
            );
          }),
    );
  }
}
