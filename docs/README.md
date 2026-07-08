# DSA Learning Site

Two standalone, self-contained HTML pages — no build step, no dependencies, no internet needed.

| File | What it is |
|---|---|
| `index.html` | The **roadmap & checklist**. Progress is saved in your browser. |
| `lessons.html` | The **beginner lessons book** — every concept explained with analogies, worked examples, and interactive visuals. |
| `code.html` | The **Code Lab** — the C++ starter files from `implementations/`, browsable with syntax highlighting and copy buttons. |
| `code-data.js` | Auto-generated data for the Code Lab (the C++ sources baked in). Regenerate with `python3 scripts/gen_code_data.py`. |

They link to each other with relative paths, so keep them in the same folder. Each roadmap topic has **📖 Learn** (→ lesson) and **💻 Code** (→ starter file) links.

## Run it locally

Just **double-click `index.html`** — it opens in your browser and works fully offline.

(Optional) To serve it like a real site:

```bash
cd docs
python3 -m http.server 8000
# then open http://localhost:8000
```

## Deploy on GitHub Pages

**Recommended — the included GitHub Action** (`.github/workflows/deploy.yml`):

1. Push this repo to GitHub.
2. Go to **Settings → Pages → Build and deployment → Source** and choose **GitHub Actions**.
3. That's it. Every push to `main` regenerates `code-data.js` from `implementations/` and deploys `docs/` automatically. Your site lands at `https://<username>.github.io/<repo>/`.

The workflow keeps the Code Lab in sync with your C++ files — edit a `.cpp`, push, and the site updates.

**Alternative — deploy from a branch** (no Action, but you must commit `docs/code-data.js`):

1. **Settings → Pages → Source → Deploy from a branch**, pick `main` and the **`/docs`** folder.
2. Run `python3 scripts/gen_code_data.py` locally and commit the result whenever you change the C++ files.

Either way, the site's home page is `index.html` (the roadmap).

### Troubleshooting: "Branch main is not allowed to deploy to github-pages"

This is an environment protection rule, not a workflow bug. Fix it in the repo settings:

- **Settings → Pages → Source** must be **GitHub Actions**.
- **Settings → Environments → `github-pages` → Deployment branches and tags** — either choose **No restriction**, or add a rule allowing **`main`**.
- Make sure **`main` is the repository's default branch** (**Settings → General → Default branch**). The environment only trusts the default branch unless you add a rule above.

Then re-run the workflow (Actions tab → the failed run → **Re-run jobs**).

## Notes

- Progress (checked items) is stored per-browser via `localStorage` — it won't sync across devices.
- Both pages adapt to your system's light/dark theme.
- Everything is inline (CSS, JS, SVG diagrams), so a single file is all a page needs.
