all: wreck

wreck:
	arduino-cli compile -b arduino:avr:uno wreck.ino
