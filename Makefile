MyDemo.class: jna.jar MyDemo.java libmystuff.so
	javac -cp .:jna.jar MyDemo.java

libmystuff.so:
	cd mystuff && make && make install

jna.jar:
	curl -v -o jna.jar https://github.com/java-native-access/jna/raw/master/dist/jna.jar

.PHONY: run

run:
	java -cp .:jna.jar MyDemo
