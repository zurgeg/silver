.PHONY: all
all: client.so

.PHONY: clean
clean:
	rm -r ./build

.PHONY: client
client: client.so # alias

client.so:
	$(MAKE) -f Makefile.client


