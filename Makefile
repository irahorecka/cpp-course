folder:
	# Make settings folder with settings.json + src/ if dir does not exist.
	@read -p "Enter folder section number: " number; \
	if [ ! -d ./Section\ $$number/ ]; then \
        mkdir -p ./Section\ $$number/.vscode/ ./Section\ $$number/src/ && cp .vscode/settings.json ./Section\ $$number/.vscode/; \
    fi;
	
