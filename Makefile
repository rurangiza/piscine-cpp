MSG	=	updated

all:
	@echo "Nothing do to. Specify: push or purge\n"

push:
	git add .
	git commit -m "$(MSG)"
	git push
purge:
	find . \( -name ".DS_Store" -or -name ".vscode" -or -name ".idea" \) -exec rm -rf {} +



