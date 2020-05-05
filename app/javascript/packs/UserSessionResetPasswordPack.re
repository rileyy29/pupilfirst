type props = {
  token: string,
  authenticityToken: string,
};

let decodeProps = json =>
  Json.Decode.{
    token: json |> field("token", string),
    authenticityToken: json |> field("authenticityToken", string),
  };

let props =
  DomUtils.parseISOAttribute(
    ~id="user-session-reset-password",
    ~attribute="data-json-props",
    (),
  )
  |> decodeProps;

ReactDOMRe.renderToElementWithId(
  <UserSessionResetPassword
    token={props.token}
    authenticityToken={props.authenticityToken}
  />,
  "user-session-reset-password",
);
