MSG	=	updated
push:
	git add .
	git commit -m "$(MSG)"
	git push
purge:
	find . \( -name ".DS_Store" -or -name ".vscode" -or -name ".idea" \) -exec rm -rf {} +



