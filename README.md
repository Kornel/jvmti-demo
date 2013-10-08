jvmti-demo
==========

jvmti toolbox is a project which will help me understand how to build JVMTI agents. 

New capabilities will appear soon.

It is built against a 32bit Windows jdk1.7.0_04, should be however
portable to other jdk7 versions.

Further changes will show how to add interesting capabilities to the
agent.

Load the agent using -agentpath, e.g. 
```
java -agentpath:jvmti-demo.dll -jar myjar.jar
```
